/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSiCloudDeviceListMonitor : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ACAccountStore *accountStore;

+ (id)iCloudDeviceListMonitor;

- (void).cxx_destruct;
- (id)account;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (bool)canMigrateToCloudKit;
- (void)dealloc;
- (void)fetchCloudKitDevicesWithCompletionBlock:(id /* block */)arg1;
- (void)fetchSoftwareVersionsFromICloudWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)queryMigrationState;
- (void)setAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;

@end
