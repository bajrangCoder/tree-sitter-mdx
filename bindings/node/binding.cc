#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage *tree_sitter_mdx();

namespace {

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports["name"] = Napi::String::New(env, "mdx");
  auto language = reinterpret_cast<uintptr_t>(tree_sitter_mdx());
  exports["language"] = Napi::External<TSLanguage>::New(env, reinterpret_cast<TSLanguage *>(language));
  return exports;
}

NODE_API_MODULE(tree_sitter_mdx_binding, Init)

}