/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits, NSArray, GEOMapRegion, GEORelatedSearchSuggestion, NSString, NSError, GEOResolvedItem, GEODirectionIntent;


@protocol MKMapServiceTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSArray * exactMapItems; 
@property (nonatomic,readonly) NSArray * refinedMapItems; 
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions; 
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion; 
@property (nonatomic,readonly) NSArray * browseCategories; 
@property (nonatomic,readonly) int searchResultType; 
@property (nonatomic,readonly) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes; 
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult; 
@property (nonatomic,readonly) NSArray * retainedSearchMetadata; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime; 
@property (nonatomic,readonly) BOOL showDymSuggestionCloseButton; 
@property (nonatomic,readonly) double requestResponseTime; 
@property (nonatomic,readonly) NSString * sectionHeader; 
@required
-(GEODirectionIntent *)directionIntent;
-(NSArray *)retainedSearchMetadata;
-(int)searchResultType;
-(unsigned)dymSuggestionVisibleTime;
-(BOOL)showDymSuggestionCloseButton;
-(BOOL)isChainResultSet;
-(NSArray *)relatedSearchSuggestions;
-(NSString *)resultDisplayHeader;
-(GEOResolvedItem *)clientResolvedResult;
-(NSArray *)displayHeaderSubstitutes;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)applyToCorrectedSearch:(id)arg1;
-(void)applyToPlaceInfo:(id)arg1;
-(NSArray *)browseCategories;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(BOOL)shouldEnableRedoSearch;
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(NSString *)sectionHeader;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(NSArray *)exactMapItems;
-(NSArray *)refinedMapItems;
-(GEOMapRegion *)boundingRegion;
-(double)requestResponseTime;
-(NSError *)error;

@end

