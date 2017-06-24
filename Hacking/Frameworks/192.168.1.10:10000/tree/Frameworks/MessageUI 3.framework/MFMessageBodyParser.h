/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyParser : MFMessageBodyParserObject {
    NSMutableArray * _elementPool;
    id /* block */  _foundMessageBodyElementBlock;
    struct __CFDictionary { } * _nodesLevelCache;
    struct __CFDictionary { } * _nodesQuoteLevelCache;
    struct __CFArray { } * _nodesStackCache;
    unsigned long long  _options;
    NSMutableArray * _paragraphNodes;
    NSError * _parserError;
    NSMutableArray * _subparsers;
}

@property (nonatomic) unsigned long long options;

+ (bool)isLinebreakImpliedAfterTagName:(id)arg1;
+ (bool)isLinebreakImpliedBeforeTagName:(id)arg1;

- (void)addSubparser:(id)arg1;
- (void)copyBlocks;
- (void)dealloc;
- (void)didFindBodyElement:(id)arg1;
- (void)didFindError:(id)arg1;
- (void)didFinishParsing;
- (void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2;
- (void)flushParagraphNodes;
- (id)getAvailableMessageBodyElement;
- (void)getLevel:(long long*)arg1 quoteLevel:(long long*)arg2 forBodyNode:(id)arg3;
- (id)init;
- (bool)isLandmarkTagName:(id)arg1;
- (Class)messageBodyElementClass;
- (Class)messageBodyStringAccumulatorClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2;
- (unsigned long long)options;
- (bool)parse;
- (id)parserError;
- (unsigned long long)quoteLevelForBodyNode:(id)arg1;
- (void)removeSubparser:(id)arg1;
- (void)setFoundMessageBodyElementBlock:(id /* block */)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (bool)shouldIgnoreTagWithTagName:(id)arg1;
- (bool)shouldProceedParsing;
- (void)willBeginParsing;

@end
