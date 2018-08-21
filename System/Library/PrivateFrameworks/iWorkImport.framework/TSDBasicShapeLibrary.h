/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDShapeSearchResultProviding.h>

@class TSULocale, TSDShapeSearchIndex, NSString;

@interface TSDBasicShapeLibrary : NSObject <TSDShapeSearchResultProviding> {

	TSULocale* _locale;
	TSDShapeSearchIndex* _searchIndex;

}

@property (nonatomic,retain) TSDShapeSearchIndex * p_searchIndex;                   //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long numberOfBasicShapes; 
@property (nonatomic,readonly) TSULocale * locale;                                  //@synthesize locale=_locale - In the implementation block
+(id)sharedLibrary;
-(void)p_updateSearchIndex:(id)arg1 ;
-(int)p_shapeTypeAtIndex:(unsigned long long)arg1 ;
-(TSDShapeSearchIndex *)p_searchIndex;
-(id)resultsForSearchTerm:(id)arg1 ;
-(id)basicShapeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfBasicShapes;
-(id)p_baseName;
-(id)shapeFromSearchResult:(id)arg1 ;
-(void)setP_searchIndex:(TSDShapeSearchIndex *)arg1 ;
-(NSString *)name;
-(TSULocale *)locale;
-(id)initWithLocale:(id)arg1 ;
@end

