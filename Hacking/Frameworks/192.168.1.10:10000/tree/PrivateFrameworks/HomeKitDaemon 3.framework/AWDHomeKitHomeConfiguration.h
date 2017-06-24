/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int numAccessories : 1; 
        unsigned int numAccessoryServiceGroups : 1; 
        unsigned int numAdmins : 1; 
        unsigned int numEventTriggers : 1; 
        unsigned int numRooms : 1; 
        unsigned int numScenes : 1; 
        unsigned int numServices : 1; 
        unsigned int numTimerTriggers : 1; 
        unsigned int numTriggers : 1; 
        unsigned int numUsers : 1; 
        unsigned int numZones : 1; 
        unsigned int isPrimaryResident : 1; 
        unsigned int isResidentAvailable : 1; 
    }  _has;
    bool  _isPrimaryResident;
    bool  _isResidentAvailable;
    unsigned int  _numAccessories;
    unsigned int  _numAccessoryServiceGroups;
    unsigned int  _numAdmins;
    unsigned int  _numEventTriggers;
    unsigned int  _numRooms;
    unsigned int  _numScenes;
    unsigned int  _numServices;
    unsigned int  _numTimerTriggers;
    unsigned int  _numTriggers;
    unsigned int  _numUsers;
    unsigned int  _numZones;
}

@property (nonatomic) bool hasIsPrimaryResident;
@property (nonatomic) bool hasIsResidentAvailable;
@property (nonatomic) bool hasNumAccessories;
@property (nonatomic) bool hasNumAccessoryServiceGroups;
@property (nonatomic) bool hasNumAdmins;
@property (nonatomic) bool hasNumEventTriggers;
@property (nonatomic) bool hasNumRooms;
@property (nonatomic) bool hasNumScenes;
@property (nonatomic) bool hasNumServices;
@property (nonatomic) bool hasNumTimerTriggers;
@property (nonatomic) bool hasNumTriggers;
@property (nonatomic) bool hasNumUsers;
@property (nonatomic) bool hasNumZones;
@property (nonatomic) bool isPrimaryResident;
@property (nonatomic) bool isResidentAvailable;
@property (nonatomic) unsigned int numAccessories;
@property (nonatomic) unsigned int numAccessoryServiceGroups;
@property (nonatomic) unsigned int numAdmins;
@property (nonatomic) unsigned int numEventTriggers;
@property (nonatomic) unsigned int numRooms;
@property (nonatomic) unsigned int numScenes;
@property (nonatomic) unsigned int numServices;
@property (nonatomic) unsigned int numTimerTriggers;
@property (nonatomic) unsigned int numTriggers;
@property (nonatomic) unsigned int numUsers;
@property (nonatomic) unsigned int numZones;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsPrimaryResident;
- (bool)hasIsResidentAvailable;
- (bool)hasNumAccessories;
- (bool)hasNumAccessoryServiceGroups;
- (bool)hasNumAdmins;
- (bool)hasNumEventTriggers;
- (bool)hasNumRooms;
- (bool)hasNumScenes;
- (bool)hasNumServices;
- (bool)hasNumTimerTriggers;
- (bool)hasNumTriggers;
- (bool)hasNumUsers;
- (bool)hasNumZones;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryResident;
- (bool)isResidentAvailable;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAccessories;
- (unsigned int)numAccessoryServiceGroups;
- (unsigned int)numAdmins;
- (unsigned int)numEventTriggers;
- (unsigned int)numRooms;
- (unsigned int)numScenes;
- (unsigned int)numServices;
- (unsigned int)numTimerTriggers;
- (unsigned int)numTriggers;
- (unsigned int)numUsers;
- (unsigned int)numZones;
- (bool)readFrom:(id)arg1;
- (void)setHasIsPrimaryResident:(bool)arg1;
- (void)setHasIsResidentAvailable:(bool)arg1;
- (void)setHasNumAccessories:(bool)arg1;
- (void)setHasNumAccessoryServiceGroups:(bool)arg1;
- (void)setHasNumAdmins:(bool)arg1;
- (void)setHasNumEventTriggers:(bool)arg1;
- (void)setHasNumRooms:(bool)arg1;
- (void)setHasNumScenes:(bool)arg1;
- (void)setHasNumServices:(bool)arg1;
- (void)setHasNumTimerTriggers:(bool)arg1;
- (void)setHasNumTriggers:(bool)arg1;
- (void)setHasNumUsers:(bool)arg1;
- (void)setHasNumZones:(bool)arg1;
- (void)setIsPrimaryResident:(bool)arg1;
- (void)setIsResidentAvailable:(bool)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (void)setNumAccessoryServiceGroups:(unsigned int)arg1;
- (void)setNumAdmins:(unsigned int)arg1;
- (void)setNumEventTriggers:(unsigned int)arg1;
- (void)setNumRooms:(unsigned int)arg1;
- (void)setNumScenes:(unsigned int)arg1;
- (void)setNumServices:(unsigned int)arg1;
- (void)setNumTimerTriggers:(unsigned int)arg1;
- (void)setNumTriggers:(unsigned int)arg1;
- (void)setNumUsers:(unsigned int)arg1;
- (void)setNumZones:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
