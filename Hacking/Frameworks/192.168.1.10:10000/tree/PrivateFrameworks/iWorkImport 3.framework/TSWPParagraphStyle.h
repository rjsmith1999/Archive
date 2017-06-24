/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPParagraphStyle : TSSStyle <TSDMixing, TSSPreset, TSTCellDiffing> {
    void * _coreTextParagraphStyle;
    struct __CFDictionary { } * _scalePercentStyleCaches;
    struct __CFDictionary { } * _styleCache;
}

@property (nonatomic, readonly) NSString *presetKind;

+ (id)cellDiffProperties;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultStyleWithDefaultPropertiesInContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)deprecatedProperties;
+ (void)initialize;
+ (id)nonEmphasisParagraphProperties;
+ (id)p_normalDecimalSeparator;
+ (id)paragraphProperties;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)styleSummaryForPropertyMap:(id)arg1;

- (void)addMissingClassProperties;
- (double)ascent;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)clearStyleCaches;
- (void)dealloc;
- (struct __CTFont { }*)findCachedFontForCharacterStyle:(id)arg1 scalePercent:(unsigned long long)arg2;
- (id)followingParagraphStyle;
- (id)fullPropertyMap;
- (struct __CFDictionary { }*)getTypesetterAttributes:(id)arg1 scalePercent:(unsigned long long)arg2 isRightToLeft:(bool)arg3;
- (id)initFromUnarchiver:(id)arg1;
- (id)initialListStyle;
- (void)loadFromArchive:(const struct ParagraphStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct CharacterStylePropertiesArchive {} *x6; struct ParagraphStylePropertiesArchive {} *x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
- (void)localizeForBidi:(bool)arg1;
- (SEL)mapThemePropertyMapSelector;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (BOOL)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg1;
- (struct __CTParagraphStyle { }*)p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg1 writingDirection:(int)arg2;
- (struct __CFDictionary { }*)p_newCoreTextCharacterStyle:(id)arg1 allowLigatures:(bool)arg2 scalePercent:(unsigned long long)arg3;
- (const struct ParagraphStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct CharacterStylePropertiesArchive {} *x6; struct ParagraphStylePropertiesArchive {} *x7; unsigned int x8; }*)paragraphStyleArchiveFromUnarchiver:(id)arg1;
- (id)presetKind;
- (void)saveToArchive:(struct ParagraphStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct CharacterStylePropertiesArchive {} *x6; struct ParagraphStylePropertiesArchive {} *x7; unsigned int x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setInitialListStyle:(id)arg1;
- (id)styleSummary;
- (bool)transformsFontSizes;
- (void)willModify;

@end
