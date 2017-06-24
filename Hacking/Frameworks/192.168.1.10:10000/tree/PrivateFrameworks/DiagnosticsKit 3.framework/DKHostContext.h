/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKHostContext : NSExtensionContext <DKHostRemoteContext> {
    <DKAssetResponder> * _assetResponder;
    <DKBrightnessResponder> * _brightnessResponder;
    <DKVolumeHUDResponder> * _volumeHUDResponder;
}

@property (nonatomic) <DKAssetResponder> *assetResponder;
@property (nonatomic) <DKBrightnessResponder> *brightnessResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <DKVolumeHUDResponder> *volumeHUDResponder;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)assetResponder;
- (id)brightnessResponder;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (bool)hasEntitlement:(id)arg1;
- (void)remoteHostEnableVolumeHUD:(bool)arg1;
- (void)remoteHostGetAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteHostSetScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)setAssetResponder:(id)arg1;
- (void)setBrightnessResponder:(id)arg1;
- (void)setVolumeHUDResponder:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (id)volumeHUDResponder;

@end
