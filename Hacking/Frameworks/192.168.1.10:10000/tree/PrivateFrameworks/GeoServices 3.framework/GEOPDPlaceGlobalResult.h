/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying> {
    GEOPDAddressObjectGeocodingResult * _addressObjectGeocodingResult;
    GEOPDAutocompleteResult * _autocompleteResult;
    GEOPDBatchPopularNearbySearchResult * _batchPopularNearbySearchResult;
    GEOPDSearchBrowseCategorySuggestionResult * _browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult * _canonicalSearchResult;
    GEOPDCategorySearchResult * _categorySearchResult;
    GEOPDFeatureIdGeocodingResult * _featureIdGeocodingResult;
    GEOPDGeocodingResult * _geocodingResult;
    GEOPDLocationDirectedSearchResult * _locationDirectedSearchResult;
    GEOPDMerchantLookupResult * _merchantLookupResult;
    GEOPDNearbySearchResult * _nearbySearchResult;
    GEOPDPlaceLookupResult * _placeLookupResult;
    GEOPDPlaceRefinementResult * _placeRefinementResult;
    GEOPDPopularNearbySearchResult * _popularNearbySearchResult;
    GEOPDReverseGeocodingResult * _reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult * _searchFieldPlaceholderResult;
    GEOPDSearchResult * _searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult * _searchZeroKeywordCategorySuggestionResult;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult * _searchZeroKeywordWithSearchResultsSuggestionResult;
    GEOPDSiriSearchResult * _siriSearchResult;
    PBUnknownFields * _unknownFields;
    GEOPDVendorSpecificPlaceRefinementResult * _vendorSpecificPlaceRefinementResult;
}

@property (nonatomic, retain) GEOPDAddressObjectGeocodingResult *addressObjectGeocodingResult;
@property (nonatomic, retain) GEOPDAutocompleteResult *autocompleteResult;
@property (nonatomic, retain) GEOPDBatchPopularNearbySearchResult *batchPopularNearbySearchResult;
@property (nonatomic, retain) GEOPDSearchBrowseCategorySuggestionResult *browseCategorySuggestionResult;
@property (nonatomic, retain) GEOPDCanonicalLocationSearchResult *canonicalSearchResult;
@property (nonatomic, retain) GEOPDCategorySearchResult *categorySearchResult;
@property (nonatomic, retain) GEOPDFeatureIdGeocodingResult *featureIdGeocodingResult;
@property (nonatomic, retain) GEOPDGeocodingResult *geocodingResult;
@property (nonatomic, readonly) bool hasAddressObjectGeocodingResult;
@property (nonatomic, readonly) bool hasAutocompleteResult;
@property (nonatomic, readonly) bool hasBatchPopularNearbySearchResult;
@property (nonatomic, readonly) bool hasBrowseCategorySuggestionResult;
@property (nonatomic, readonly) bool hasCanonicalSearchResult;
@property (nonatomic, readonly) bool hasCategorySearchResult;
@property (nonatomic, readonly) bool hasFeatureIdGeocodingResult;
@property (nonatomic, readonly) bool hasGeocodingResult;
@property (nonatomic, readonly) bool hasLocationDirectedSearchResult;
@property (nonatomic, readonly) bool hasMerchantLookupResult;
@property (nonatomic, readonly) bool hasNearbySearchResult;
@property (nonatomic, readonly) bool hasPlaceLookupResult;
@property (nonatomic, readonly) bool hasPlaceRefinementResult;
@property (nonatomic, readonly) bool hasPopularNearbySearchResult;
@property (nonatomic, readonly) bool hasReverseGeocodingResult;
@property (nonatomic, readonly) bool hasSearchFieldPlaceholderResult;
@property (nonatomic, readonly) bool hasSearchResult;
@property (nonatomic, readonly) bool hasSearchZeroKeywordCategorySuggestionResult;
@property (nonatomic, readonly) bool hasSearchZeroKeywordWithSearchResultsSuggestionResult;
@property (nonatomic, readonly) bool hasSiriSearchResult;
@property (nonatomic, readonly) bool hasVendorSpecificPlaceRefinementResult;
@property (nonatomic, retain) GEOPDLocationDirectedSearchResult *locationDirectedSearchResult;
@property (nonatomic, retain) GEOPDMerchantLookupResult *merchantLookupResult;
@property (nonatomic, retain) GEOPDNearbySearchResult *nearbySearchResult;
@property (nonatomic, retain) GEOPDPlaceLookupResult *placeLookupResult;
@property (nonatomic, retain) GEOPDPlaceRefinementResult *placeRefinementResult;
@property (nonatomic, retain) GEOPDPopularNearbySearchResult *popularNearbySearchResult;
@property (nonatomic, retain) GEOPDReverseGeocodingResult *reverseGeocodingResult;
@property (nonatomic, retain) GEOPDSearchFieldPlaceholderResult *searchFieldPlaceholderResult;
@property (nonatomic, retain) GEOPDSearchResult *searchResult;
@property (nonatomic, retain) GEOPDSearchZeroKeywordCategorySuggestionResult *searchZeroKeywordCategorySuggestionResult;
@property (nonatomic, retain) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *searchZeroKeywordWithSearchResultsSuggestionResult;
@property (nonatomic, retain) GEOPDSiriSearchResult *siriSearchResult;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVendorSpecificPlaceRefinementResult *vendorSpecificPlaceRefinementResult;

- (id)addressObjectGeocodingResult;
- (id)autocompleteResult;
- (id)batchPopularNearbySearchResult;
- (id)browseCategorySuggestionResult;
- (id)canonicalSearchResult;
- (id)categorySearchResult;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureIdGeocodingResult;
- (id)geocodingResult;
- (bool)hasAddressObjectGeocodingResult;
- (bool)hasAutocompleteResult;
- (bool)hasBatchPopularNearbySearchResult;
- (bool)hasBrowseCategorySuggestionResult;
- (bool)hasCanonicalSearchResult;
- (bool)hasCategorySearchResult;
- (bool)hasFeatureIdGeocodingResult;
- (bool)hasGeocodingResult;
- (bool)hasLocationDirectedSearchResult;
- (bool)hasMerchantLookupResult;
- (bool)hasNearbySearchResult;
- (bool)hasPlaceLookupResult;
- (bool)hasPlaceRefinementResult;
- (bool)hasPopularNearbySearchResult;
- (bool)hasReverseGeocodingResult;
- (bool)hasSearchFieldPlaceholderResult;
- (bool)hasSearchResult;
- (bool)hasSearchZeroKeywordCategorySuggestionResult;
- (bool)hasSearchZeroKeywordWithSearchResultsSuggestionResult;
- (bool)hasSiriSearchResult;
- (bool)hasVendorSpecificPlaceRefinementResult;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationDirectedSearchResult;
- (id)merchantLookupResult;
- (void)mergeFrom:(id)arg1;
- (id)nearbySearchResult;
- (id)placeLookupResult;
- (id)placeRefinementResult;
- (id)popularNearbySearchResult;
- (bool)readFrom:(id)arg1;
- (id)reverseGeocodingResult;
- (id)searchFieldPlaceholderResult;
- (id)searchResult;
- (id)searchZeroKeywordCategorySuggestionResult;
- (id)searchZeroKeywordWithSearchResultsSuggestionResult;
- (void)setAddressObjectGeocodingResult:(id)arg1;
- (void)setAutocompleteResult:(id)arg1;
- (void)setBatchPopularNearbySearchResult:(id)arg1;
- (void)setBrowseCategorySuggestionResult:(id)arg1;
- (void)setCanonicalSearchResult:(id)arg1;
- (void)setCategorySearchResult:(id)arg1;
- (void)setFeatureIdGeocodingResult:(id)arg1;
- (void)setGeocodingResult:(id)arg1;
- (void)setLocationDirectedSearchResult:(id)arg1;
- (void)setMerchantLookupResult:(id)arg1;
- (void)setNearbySearchResult:(id)arg1;
- (void)setPlaceLookupResult:(id)arg1;
- (void)setPlaceRefinementResult:(id)arg1;
- (void)setPopularNearbySearchResult:(id)arg1;
- (void)setReverseGeocodingResult:(id)arg1;
- (void)setSearchFieldPlaceholderResult:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setSearchZeroKeywordCategorySuggestionResult:(id)arg1;
- (void)setSearchZeroKeywordWithSearchResultsSuggestionResult:(id)arg1;
- (void)setSiriSearchResult:(id)arg1;
- (void)setVendorSpecificPlaceRefinementResult:(id)arg1;
- (id)siriSearchResult;
- (id)unknownFields;
- (id)vendorSpecificPlaceRefinementResult;
- (void)writeTo:(id)arg1;

@end
