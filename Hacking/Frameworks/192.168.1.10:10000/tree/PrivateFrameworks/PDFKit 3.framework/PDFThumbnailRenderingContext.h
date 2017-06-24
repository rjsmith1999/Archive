/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFThumbnailRenderingContext : NSObject {
    id  _contextObject;
    bool  _needToRescheduleOnCompletionOfOperation;
    PDFPage * _page;
    unsigned long long  _preferredImageSize;
    bool  _shouldRescheduleIfChangingPreferredSize;
    id /* block */  _updateThumbnailBlock;
}

@property (retain) id contextObject;
@property bool needToRescheduleOnCompletionOfOperation;
@property PDFPage *page;
@property unsigned long long preferredImageSize;
@property bool shouldRescheduleIfChangingPreferredSize;
@property (copy) id /* block */ updateThumbnailBlock;

- (void).cxx_destruct;
- (id)contextObject;
- (bool)needToRescheduleOnCompletionOfOperation;
- (id)page;
- (unsigned long long)preferredImageSize;
- (void)setContextObject:(id)arg1;
- (void)setNeedToRescheduleOnCompletionOfOperation:(bool)arg1;
- (void)setPage:(id)arg1;
- (void)setPreferredImageSize:(unsigned long long)arg1;
- (void)setShouldRescheduleIfChangingPreferredSize:(bool)arg1;
- (void)setUpdateThumbnailBlock:(id /* block */)arg1;
- (bool)shouldRescheduleIfChangingPreferredSize;
- (id /* block */)updateThumbnailBlock;

@end
