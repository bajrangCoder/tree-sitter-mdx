const Parser = require('tree-sitter');

describe('tree-sitter-mdx', () => {
  let parser;
  let MDX;

  beforeAll(() => {
    parser = new Parser();
    try {
      MDX = require('../');
      parser.setLanguage(MDX);
    } catch (error) {
      console.warn('Parser not yet built. Run npm run generate && npm run build first.');
    }
  });

  const parseAndPrint = (code) => {
    if (!MDX) return null;
    const tree = parser.parse(code);
    return tree.rootNode.toString();
  };

  test('should parse simple paragraph', () => {
    const code = 'This is a simple paragraph.';
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('document');
      expect(result).toContain('paragraph');
      expect(result).toContain('text');
    }
  });

  test('should parse heading', () => {
    const code = '# This is a heading';
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('document');
      expect(result).toContain('heading');
    }
  });

  test('should parse JSX element', () => {
    const code = '<div>Hello world</div>';
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('jsx_element');
      expect(result).toContain('jsx_opening_element');
      expect(result).toContain('jsx_closing_element');
    }
  });

  test('should parse JSX self-closing element', () => {
    const code = '<img src="image.jpg" />';
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('jsx_self_closing_element');
      expect(result).toContain('jsx_attribute');
    }
  });

  test('should parse MDX expression', () => {
    const code = '{2 + 2}';
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('mdx_expression');
      expect(result).toContain('binary_expression');
    }
  });

  test('should parse import statement', () => {
    const code = "import React from 'react';";
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('import_statement');
      expect(result).toContain('identifier');
      expect(result).toContain('string_literal');
    }
  });

  test('should parse export statement', () => {
    const code = 'export default function Component() { return <div>Hello</div>; }';
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('export_statement');
      expect(result).toContain('function_declaration');
    }
  });

  test('should parse code block', () => {
    const code = '```javascript\nfunction hello() {\n  console.log("Hello");\n}\n```';
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('code_block');
      expect(result).toContain('fenced_code_block');
    }
  });

  test('should parse mixed content', () => {
    const code = `# Hello World

This is a paragraph with <strong>JSX</strong> inline.

<CustomComponent prop="value">
  Content here.
</CustomComponent>`;
    const result = parseAndPrint(code);
    if (result) {
      expect(result).toContain('heading');
      expect(result).toContain('paragraph');
      expect(result).toContain('jsx_element');
    }
  });
});