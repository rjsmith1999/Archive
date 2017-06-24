/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManualDownloadPolicy : SUDefaultDownloadPolicy {
    bool  _autoDownloadAllowableForCellular;
    bool  _downloadAllowableForCellular;
    bool  _downloadAllowableForCellular2G;
    bool  _downloadAllowableForCellularRoaming;
    bool  _downloadAllowableForWiFi;
    bool  _downloadFreeForCellular;
    bool  _downloadable;
    Class  _fakeClass;
    bool  _hasEnoughDiskSpace;
    bool  _powerRequired;
}

@property (getter=isDownloadAllowableForCellular, nonatomic) bool downloadAllowableForCellular;
@property (getter=isDownloadAllowableForCellular2G, nonatomic) bool downloadAllowableForCellular2G;
@property (getter=isDownloadAllowableForCellularRoaming, nonatomic) bool downloadAllowableForCellularRoaming;
@property (getter=isDownloadAllowableForWiFi, nonatomic) bool downloadAllowableForWiFi;
@property (getter=isDownloadFreeForCellular, nonatomic) bool downloadFreeForCellular;
@property (getter=isDownloadable, nonatomic) bool downloadable;
@property (nonatomic, retain) Class fakeClass;
@property (getter=hasEnoughDiskSpace, nonatomic) bool hasEnoughDiskSpace;
@property (getter=isPowerRequired, nonatomic) bool powerRequired;

- (Class)class;
- (Class)fakeClass;
- (bool)hasEnoughDiskSpace;
- (id)init;
- (bool)isDownloadAllowableForCellular;
- (bool)isDownloadAllowableForCellular2G;
- (bool)isDownloadAllowableForCellularRoaming;
- (bool)isDownloadAllowableForWiFi;
- (bool)isDownloadFreeForCellular;
- (bool)isDownloadable;
- (bool)isPowerRequired;
- (void)setDownloadAllowableForCellular2G:(bool)arg1;
- (void)setDownloadAllowableForCellular:(bool)arg1;
- (void)setDownloadAllowableForCellularRoaming:(bool)arg1;
- (void)setDownloadAllowableForWiFi:(bool)arg1;
- (void)setDownloadFreeForCellular:(bool)arg1;
- (void)setDownloadable:(bool)arg1;
- (void)setFakeClass:(Class)arg1;
- (void)setHasEnoughDiskSpace:(bool)arg1;
- (void)setPowerRequired:(bool)arg1;
- (bool)superIsDownloadable;

@end
