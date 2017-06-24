/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPEventClassificationType : NSObject {
    bool  _allDayAllowed;
    NSMutableArray * _children;
    unsigned long long  _classificationDepth;
    double  _defaultDuration;
    int  _defaultStartingTimeHour;
    int  _defaultStartingTimeMinutes;
    NSString * _defaultTitle;
    NSArray * _events;
    bool  _highPriority;
    NSString * _identifier;
    NSMutableArray * _keywords;
    NSString * _language;
    bool  _lowPriority;
    double  _minutesAfterDefaultStartingTime;
    double  _minutesBeforeDefaultStartingTime;
    IPEventClassificationType * _parent;
    NSString * _subjectKeywordsPattern;
    NSMutableSet * _upperPriorityEventTypes;
    bool  _useForTimeAdjustement;
}

@property (getter=isAllDayAllowed, nonatomic) bool allDayAllowed;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic) unsigned long long classificationDepth;
@property (getter=isCultureRelated, nonatomic, readonly) bool cultureRelated;
@property (nonatomic) double defaultDuration;
@property (nonatomic) int defaultStartingTimeHour;
@property (nonatomic) int defaultStartingTimeMinutes;
@property (nonatomic, retain) NSString *defaultTitle;
@property (nonatomic, retain) NSArray *events;
@property (getter=isFairlyGeneric, nonatomic, readonly) bool fairlyGeneric;
@property (getter=isHighPriority, nonatomic) bool highPriority;
@property (nonatomic, retain) NSString *identifier;
@property (getter=isAppointment, nonatomic, readonly) bool isAppointment;
@property (nonatomic, retain) NSMutableArray *keywords;
@property (nonatomic, retain) NSString *language;
@property (getter=isLowPriority, nonatomic) bool lowPriority;
@property (getter=isMealRelated, nonatomic, readonly) bool mealRelated;
@property (nonatomic) double minutesAfterDefaultStartingTime;
@property (nonatomic) double minutesBeforeDefaultStartingTime;
@property (getter=isMovieRelated, nonatomic, readonly) bool movieRelated;
@property (nonatomic) IPEventClassificationType *parent;
@property (getter=isSportRelated, nonatomic, readonly) bool sportRelated;
@property (retain) NSString *subjectKeywordsPattern;
@property (nonatomic, retain) NSMutableSet *upperPriorityEventTypes;
@property (nonatomic) bool useForTimeAdjustement;

+ (id)_allClusterIdentifiers;
+ (double)_computeScoreForEventTypeBranchNode:(id)arg1 messageUnit:(id)arg2;
+ (id)_identifierForCluster:(unsigned long long)arg1;
+ (id)_identifiersForClusters:(id)arg1;
+ (id)_loadTaxonomyForLanguageID:(id)arg1 clusterIdentifier:(id)arg2 error:(id*)arg3;
+ (double)_numberOfMatchingKeywordsForRegex:(id)arg1 inText:(id)arg2 message:(id)arg3 rejectionRanges:(id)arg4 eventType:(id)arg5 logDetectedKeywords:(bool)arg6;
+ (id)_parentFromIdentifier:(id)arg1;
+ (id)_priorityEventTypeFromCandidates:(id)arg1;
+ (id)_selectBestEventTypeFromCandidates:(id)arg1;
+ (id)_taxonomyForLanguageID:(id)arg1 clusterType:(unsigned long long)arg2;
+ (id)cleanSubject:(id)arg1;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 detectedStartDate:(id)arg2;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 scopedClusterType:(unsigned long long)arg2 fallbackClusterType:(unsigned long long)arg3;
+ (id)eventTypeForCultureAndLanguageID:(id)arg1;
+ (id)eventTypeForEntertainmentAndLanguageID:(id)arg1;
+ (id)eventTypeForMealsAndLanguageID:(id)arg1;
+ (id)eventTypeForMoviesAndLanguageID:(id)arg1;
+ (id)eventTypeForSportAndLanguageID:(id)arg1;
+ (id)fallbackEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 checkForDateInSubject:(bool)arg3;
+ (id)morePreciseEventClassificationTypeBetweenType:(id)arg1 and:(id)arg2;

- (void).cxx_destruct;
- (void)_addChild:(id)arg1;
- (void)_addParent:(id)arg1;
- (void)_addUpperPriorityEventType:(id)arg1;
- (bool)_hasPriorityOverEventType:(id)arg1;
- (bool)_hasPriorityOverEventTypes:(id)arg1;
- (id)_mealClassificationTypeUsingStartDate:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)adjustedEventClassificationTypeWithStartDate:(id)arg1;
- (id)adjustedEventTitleForMessageUnits:(id)arg1;
- (id)adjustedEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 isDateInSubject:(bool)arg3;
- (id)children;
- (unsigned long long)classificationDepth;
- (double)defaultDuration;
- (int)defaultStartingTimeHour;
- (int)defaultStartingTimeMinutes;
- (id)defaultTitle;
- (id)description;
- (id)events;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 language:(id)arg2 keywords:(id)arg3 defaultTitle:(id)arg4 defaultStartingTimeHour:(int)arg5 defaultStartingTimeMinutes:(int)arg6 defaultDuration:(double)arg7 parent:(id)arg8 children:(id)arg9 upperPriorityEventTypes:(id)arg10 useForTimeAdjustement:(bool)arg11 minutesBeforeDefaultStartingTime:(double)arg12 minutesAfterDefaultStartingTime:(double)arg13 highPriority:(bool)arg14 lowPriority:(bool)arg15 allDayAllowed:(bool)arg16 subjectKeywords:(id)arg17;
- (bool)isAllDayAllowed;
- (bool)isAppointment;
- (bool)isCultureRelated;
- (bool)isDateWithinRange:(id)arg1;
- (bool)isFairlyGeneric;
- (bool)isHighPriority;
- (bool)isLowPriority;
- (bool)isMealRelated;
- (bool)isMovieRelated;
- (bool)isSportRelated;
- (id)keywords;
- (id)language;
- (double)minutesAfterDefaultStartingTime;
- (double)minutesBeforeDefaultStartingTime;
- (id)parent;
- (id)properCasedTitleForTitle:(id)arg1 locale:(id)arg2;
- (void)setAllDayAllowed:(bool)arg1;
- (void)setChildren:(id)arg1;
- (void)setClassificationDepth:(unsigned long long)arg1;
- (void)setDefaultDuration:(double)arg1;
- (void)setDefaultStartingTimeHour:(int)arg1;
- (void)setDefaultStartingTimeMinutes:(int)arg1;
- (void)setDefaultTitle:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLowPriority:(bool)arg1;
- (void)setMinutesAfterDefaultStartingTime:(double)arg1;
- (void)setMinutesBeforeDefaultStartingTime:(double)arg1;
- (void)setParent:(id)arg1;
- (void)setSubjectKeywordsPattern:(id)arg1;
- (void)setUpperPriorityEventTypes:(id)arg1;
- (void)setUseForTimeAdjustement:(bool)arg1;
- (id)subjectKeywordsPattern;
- (id)upperPriorityEventTypes;
- (bool)useForTimeAdjustement;

@end
