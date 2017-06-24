/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletin : PBCodable <NSCopying> {
    NSData * _alertSuppressionContexts;
    NSData * _attachment;
    unsigned int  _attachmentType;
    NSString * _attachmentURL;
    NSString * _bulletinID;
    NSString * _category;
    NSString * _categoryID;
    bool  _containsUpdatedAttachment;
    NSData * _context;
    double  _date;
    BLTPBAction * _dismissAction;
    NSString * _dismissalID;
    unsigned int  _feed;
    struct { 
        unsigned int date : 1; 
        unsigned int publicationDate : 1; 
        unsigned int attachmentType : 1; 
        unsigned int sectionSubtype : 1; 
        unsigned int soundAlertType : 1; 
        unsigned int containsUpdatedAttachment : 1; 
        unsigned int ignoresQuietMode : 1; 
        unsigned int loading : 1; 
        unsigned int turnsOnDisplay : 1; 
    }  _has;
    bool  _ignoresQuietMode;
    bool  _includesSound;
    bool  _loading;
    NSString * _messageTitle;
    NSMutableArray * _peopleIDs;
    double  _publicationDate;
    NSString * _publisherBulletinID;
    NSString * _recordID;
    NSString * _sectionDisplayName;
    NSString * _sectionID;
    int  _sectionSubtype;
    BLTPBAction * _snoozeAction;
    NSString * _sockPuppetAppBundleID;
    NSString * _soundAccountIdentifier;
    int  _soundAlertType;
    NSString * _soundToneIdentifier;
    NSMutableArray * _subsectionIDs;
    NSString * _subtitle;
    NSMutableArray * _supplementaryActions;
    NSString * _teamID;
    NSString * _title;
    bool  _turnsOnDisplay;
    NSString * _universalSectionID;
}

@property (nonatomic, retain) NSData *alertSuppressionContexts;
@property (nonatomic, retain) NSData *attachment;
@property (nonatomic) unsigned int attachmentType;
@property (nonatomic, retain) NSString *attachmentURL;
@property (nonatomic, retain) NSString *bulletinID;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *categoryID;
@property (nonatomic) bool containsUpdatedAttachment;
@property (nonatomic, retain) NSData *context;
@property (nonatomic) double date;
@property (nonatomic, retain) BLTPBAction *dismissAction;
@property (nonatomic, retain) NSString *dismissalID;
@property (nonatomic) unsigned int feed;
@property (nonatomic, readonly) bool hasAlertSuppressionContexts;
@property (nonatomic, readonly) bool hasAttachment;
@property (nonatomic) bool hasAttachmentType;
@property (nonatomic, readonly) bool hasAttachmentURL;
@property (nonatomic, readonly) bool hasBulletinID;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasCategoryID;
@property (nonatomic) bool hasContainsUpdatedAttachment;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasDate;
@property (nonatomic, readonly) bool hasDismissAction;
@property (nonatomic, readonly) bool hasDismissalID;
@property (nonatomic) bool hasIgnoresQuietMode;
@property (nonatomic) bool hasLoading;
@property (nonatomic, readonly) bool hasMessageTitle;
@property (nonatomic) bool hasPublicationDate;
@property (nonatomic, readonly) bool hasPublisherBulletinID;
@property (nonatomic, readonly) bool hasRecordID;
@property (nonatomic, readonly) bool hasSectionDisplayName;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool hasSectionSubtype;
@property (nonatomic, readonly) bool hasSnoozeAction;
@property (nonatomic, readonly) bool hasSockPuppetAppBundleID;
@property (nonatomic, readonly) bool hasSoundAccountIdentifier;
@property (nonatomic) bool hasSoundAlertType;
@property (nonatomic, readonly) bool hasSoundToneIdentifier;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTeamID;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasTurnsOnDisplay;
@property (nonatomic, readonly) bool hasUniversalSectionID;
@property (nonatomic) bool ignoresQuietMode;
@property (nonatomic) bool includesSound;
@property (nonatomic) bool loading;
@property (nonatomic, retain) NSString *messageTitle;
@property (nonatomic, retain) NSMutableArray *peopleIDs;
@property (nonatomic) double publicationDate;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSString *sectionDisplayName;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) int sectionSubtype;
@property (nonatomic, retain) BLTPBAction *snoozeAction;
@property (nonatomic, retain) NSString *sockPuppetAppBundleID;
@property (nonatomic, retain) NSString *soundAccountIdentifier;
@property (nonatomic) int soundAlertType;
@property (nonatomic, retain) NSString *soundToneIdentifier;
@property (nonatomic, retain) NSMutableArray *subsectionIDs;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSMutableArray *supplementaryActions;
@property (nonatomic, retain) NSString *teamID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool turnsOnDisplay;
@property (nonatomic, retain) NSString *universalSectionID;

+ (void)_addPrimaryAttachmentFromBBBulletin:(id)arg1 toBLTPBBulletin:(id)arg2 observer:(id)arg3 completion:(id /* block */)arg4;
+ (void)bulletinWithBBBulletin:(id)arg1 sockPuppetAppBundleID:(id)arg2 isSockPuppetAppInstalled:(bool)arg3 observer:(id)arg4 feed:(unsigned long long)arg5 teamID:(id)arg6 universalSectionID:(id)arg7 completion:(id /* block */)arg8;

- (void).cxx_destruct;
- (void)addPeopleIDs:(id)arg1;
- (void)addSubsectionIDs:(id)arg1;
- (void)addSupplementaryActions:(id)arg1;
- (id)alertSuppressionContexts;
- (id)attachment;
- (id)attachmentKey;
- (unsigned int)attachmentType;
- (id)attachmentURL;
- (id)attachmentURLURL;
- (id)bulletinID;
- (id)category;
- (id)categoryID;
- (void)clearPeopleIDs;
- (void)clearSubsectionIDs;
- (void)clearSupplementaryActions;
- (bool)containsUpdatedAttachment;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dismissAction;
- (id)dismissalID;
- (unsigned int)feed;
- (bool)hasAlertSuppressionContexts;
- (bool)hasAttachment;
- (bool)hasAttachmentType;
- (bool)hasAttachmentURL;
- (bool)hasBulletinID;
- (bool)hasCategory;
- (bool)hasCategoryID;
- (bool)hasContainsUpdatedAttachment;
- (bool)hasContext;
- (bool)hasDate;
- (bool)hasDismissAction;
- (bool)hasDismissalID;
- (bool)hasIgnoresQuietMode;
- (bool)hasLoading;
- (bool)hasMessageTitle;
- (bool)hasPublicationDate;
- (bool)hasPublisherBulletinID;
- (bool)hasRecordID;
- (bool)hasSectionDisplayName;
- (bool)hasSectionID;
- (bool)hasSectionSubtype;
- (bool)hasSnoozeAction;
- (bool)hasSockPuppetAppBundleID;
- (bool)hasSoundAccountIdentifier;
- (bool)hasSoundAlertType;
- (bool)hasSoundToneIdentifier;
- (bool)hasSubtitle;
- (bool)hasTeamID;
- (bool)hasTitle;
- (bool)hasTurnsOnDisplay;
- (bool)hasUniversalSectionID;
- (unsigned long long)hash;
- (bool)ignoresQuietMode;
- (bool)includesSound;
- (bool)isEqual:(id)arg1;
- (bool)loading;
- (void)mergeFrom:(id)arg1;
- (id)messageTitle;
- (id)peopleIDs;
- (id)peopleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleIDsCount;
- (double)publicationDate;
- (id)publisherBulletinID;
- (id)publisherMatchID;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)sectionDisplayName;
- (id)sectionID;
- (int)sectionSubtype;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentType:(unsigned int)arg1;
- (void)setAttachmentURL:(id)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setContainsUpdatedAttachment:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissalID:(id)arg1;
- (void)setFeed:(unsigned int)arg1;
- (void)setHasAttachmentType:(bool)arg1;
- (void)setHasContainsUpdatedAttachment:(bool)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasIgnoresQuietMode:(bool)arg1;
- (void)setHasLoading:(bool)arg1;
- (void)setHasPublicationDate:(bool)arg1;
- (void)setHasSectionSubtype:(bool)arg1;
- (void)setHasSoundAlertType:(bool)arg1;
- (void)setHasTurnsOnDisplay:(bool)arg1;
- (void)setIgnoresQuietMode:(bool)arg1;
- (void)setIncludesSound:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setMessageTitle:(id)arg1;
- (void)setPeopleIDs:(id)arg1;
- (void)setPublicationDate:(double)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionDisplayName:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(int)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSockPuppetAppBundleID:(id)arg1;
- (void)setSoundAccountIdentifier:(id)arg1;
- (void)setSoundAlertType:(int)arg1;
- (void)setSoundToneIdentifier:(id)arg1;
- (void)setSubsectionIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTurnsOnDisplay:(bool)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (id)snoozeAction;
- (id)sockPuppetAppBundleID;
- (id)soundAccountIdentifier;
- (int)soundAlertType;
- (id)soundToneIdentifier;
- (id)subsectionIDs;
- (id)subsectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subsectionIDsCount;
- (id)subtitle;
- (id)supplementaryActions;
- (id)supplementaryActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supplementaryActionsCount;
- (id)teamID;
- (id)title;
- (bool)turnsOnDisplay;
- (id)universalSectionID;
- (void)writeTo:(id)arg1;

@end
