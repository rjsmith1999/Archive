/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageLoadingUtilities : NSObject

+ (void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 sync:(bool)arg7 completion:(id /* block */)arg8;
+ (id)_filledHalfScreenLargeImageLoader;
+ (id)_filledScreenLargeImageLoader;
+ (id)_fullScreenLargeImageLoader;
+ (id)_fullSizeLargeImageLoaderForFormatID:(int)arg1;
+ (bool)canAccessImageForAsset:(id)arg1;
+ (void)imageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 completion:(id /* block */)arg8 sync:(bool)arg9;
+ (id)newImageDataForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 outImageDataInfo:(id*)arg8 outCPLDownloadContext:(id*)arg9;
+ (id)newImageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 outImageProperties:(const struct __CFDictionary {}**)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10;
+ (id)newImageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(bool*)arg5;
+ (id)preheatItemSourceForFormatID:(int)arg1;

@end
