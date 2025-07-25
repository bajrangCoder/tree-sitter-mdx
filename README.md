# tree-sitter-mdx

A Tree-sitter grammar for MDX (Markdown with JSX).

## Features

- Parses MDX syntax including:
  - Standard Markdown elements (headings, paragraphs, lists, code blocks, etc.)
  - JSX elements and components
  - MDX expressions (`{JavaScript}`)
  - ES module imports and exports
  - Mixed content (Markdown with embedded JSX)

## Installation

```bash
npm install tree-sitter-mdx
```

## Usage

### Node.js

```javascript
const Parser = require('tree-sitter');
const MDX = require('tree-sitter-mdx');

const parser = new Parser();
parser.setLanguage(MDX);

const sourceCode = `
import React from 'react';

# Hello World

This is a paragraph with <strong>JSX</strong> inline.

<CustomComponent prop="value">
  ## Nested heading
  
  More content here.
</CustomComponent>
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Web/WASM

```javascript
import Parser from 'web-tree-sitter';

await Parser.init();
const parser = new Parser();
const MDX = await Parser.Language.load('tree-sitter-mdx.wasm');
parser.setLanguage(MDX);

const tree = parser.parse(sourceCode);
```

## Development

### Setup

```bash
# Clone the repository
git clone https://github.com/your-username/tree-sitter-mdx.git
cd tree-sitter-mdx

# Install dependencies
npm install

# Generate the parser
npm run generate

# Build the parser
npm run build
```

### Testing

```bash
# Run all tests
npm test

# Run only corpus tests
npm run test:corpus

# Run only unit tests
npm run test:unit
```

### Scripts

- `npm run generate` - Generate parser from grammar
- `npm run build` - Build the parser and WASM
- `npm run test` - Run all tests
- `npm run parse <file>` - Parse a file and print the syntax tree
- `npm run highlight <file>` - Highlight a file using the grammar
- `npm run playground` - Open the Tree-sitter playground

## Grammar Structure

The grammar supports:

### Markdown Elements
- Headings (`# ## ###`)
- Paragraphs
- Lists (ordered and unordered)
- Code blocks (fenced and indented)
- Blockquotes
- Tables
- Horizontal rules
- Inline formatting (bold, italic, code spans, links, images)

### JSX Elements
- JSX elements (`<Component>`)
- Self-closing elements (`<Component />`)
- JSX fragments (`<>...</>`)
- JSX attributes with values
- Nested JSX elements

### MDX Expressions
- Flow expressions (`{expression}`)
- Text expressions (`{expression}`)
- JavaScript expressions within braces

### ES Modules
- Import statements
- Export statements (default and named)
- Module declarations

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests for your changes
5. Run the test suite
6. Submit a pull request

## License

MIT