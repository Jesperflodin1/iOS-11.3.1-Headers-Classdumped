/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsStrategy, MapsSuggestionsLocationUpdater;
@class NSMutableArray, NSMutableDictionary, NSString;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject> {

	BOOL _hasTracker;
	id<MapsSuggestionsStrategy> _strategy;
	long long _managerStyle;
	id<MapsSuggestionsLocationUpdater> _locationUpdater;
	NSMutableArray* _sourceClasses;
	NSMutableArray* _includeFilters;
	NSMutableArray* _includeImprovers;
	NSMutableArray* _includeDedupers;
	NSMutableArray* _excludeFilters;
	NSMutableArray* _excludeImprovers;
	NSMutableArray* _excludeDedupers;
	NSMutableDictionary* _titleFormatters;

}

@property (nonatomic,retain) id<MapsSuggestionsStrategy> strategy;                            //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) long long managerStyle;                                          //@synthesize managerStyle=_managerStyle - In the implementation block
@property (nonatomic,retain) id<MapsSuggestionsLocationUpdater> locationUpdater;              //@synthesize locationUpdater=_locationUpdater - In the implementation block
@property (assign,nonatomic) BOOL hasTracker;                                                 //@synthesize hasTracker=_hasTracker - In the implementation block
@property (nonatomic,retain) NSMutableArray * sourceClasses;                                  //@synthesize sourceClasses=_sourceClasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeFilters;                                 //@synthesize includeFilters=_includeFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeImprovers;                               //@synthesize includeImprovers=_includeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * includeDedupers;                                //@synthesize includeDedupers=_includeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeFilters;                                 //@synthesize excludeFilters=_excludeFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeImprovers;                               //@synthesize excludeImprovers=_excludeImprovers - In the implementation block
@property (nonatomic,retain) NSMutableArray * excludeDedupers;                                //@synthesize excludeDedupers=_excludeDedupers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleFormatters;                           //@synthesize titleFormatters=_titleFormatters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)currentEngine;
+(id)_forPhone;
+(id)forSimulator;
+(id)forTests;
+(id)forEveryone;
+(id)simpleStrategy;
+(id)forDevice;
-(id)build;
-(NSString *)uniqueName;
-(void)setStrategy:(id<MapsSuggestionsStrategy>)arg1 ;
-(id<MapsSuggestionsLocationUpdater>)locationUpdater;
-(void)setLocationUpdater:(id<MapsSuggestionsLocationUpdater>)arg1 ;
-(id)withLocationUpdater:(id)arg1 ;
-(id)withoutTracker;
-(id)withFilters:(id)arg1 ;
-(id)withoutFilters:(id)arg1 ;
-(id)withImprovers:(id)arg1 ;
-(id)withoutImprovers:(id)arg1 ;
-(id)withDedupers:(id)arg1 ;
-(id)withoutDedupers:(id)arg1 ;
-(id)withSourceClasses:(id)arg1 ;
-(id)withTitleFormatter:(id)arg1 forType:(unsigned long long)arg2 ;
-(id)withManagerStyle:(long long)arg1 ;
-(long long)managerStyle;
-(void)setManagerStyle:(long long)arg1 ;
-(BOOL)hasTracker;
-(void)setHasTracker:(BOOL)arg1 ;
-(NSMutableArray *)sourceClasses;
-(void)setSourceClasses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)includeFilters;
-(void)setIncludeFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)includeImprovers;
-(void)setIncludeImprovers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)includeDedupers;
-(void)setIncludeDedupers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludeFilters;
-(void)setExcludeFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludeImprovers;
-(void)setExcludeImprovers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)excludeDedupers;
-(void)setExcludeDedupers:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)titleFormatters;
-(void)setTitleFormatters:(NSMutableDictionary *)arg1 ;
-(id<MapsSuggestionsStrategy>)strategy;
@end

