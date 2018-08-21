/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
@class NFLFontCache, NSDictionary;

@interface NFLAbstractCellProperties : NSObject {

	NFLFontCache* _fontCache;
	double _scaleValue;
	long long _rowSpan;
	NSDictionary* _layout;
	NSDictionary* _columnIrrespectiveProperties;
	SCD_Struct_NF0 _headlineScales;

}

@property (nonatomic,retain) NSDictionary * layout;                                    //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSDictionary * columnIrrespectiveProperties;              //@synthesize columnIrrespectiveProperties=_columnIrrespectiveProperties - In the implementation block
@property (nonatomic,retain) NFLFontCache * fontCache;                                 //@synthesize fontCache=_fontCache - In the implementation block
@property (assign,nonatomic) double scaleValue;                                        //@synthesize scaleValue=_scaleValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_NF0 headlineScales;                            //@synthesize headlineScales=_headlineScales - In the implementation block
@property (nonatomic,readonly) long long rowSpan;                                      //@synthesize rowSpan=_rowSpan - In the implementation block
-(NSDictionary *)layout;
-(void)setLayout:(NSDictionary *)arg1 ;
-(double)scaleValue;
-(id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4 headlineScales:(SCD_Struct_NF0)arg5 ;
-(CGSize)sizeForPropertyKey:(id)arg1 ;
-(id)numberForPropertyKey:(id)arg1 ;
-(id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(NSDictionary *)columnIrrespectiveProperties;
-(SCD_Struct_NF0)headlineScales;
-(CGSize)scaledSizeForPropertyKey:(id)arg1 ;
-(id)scaledNumberForPropertyKey:(id)arg1 ;
-(id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(id)arrayForPropertyKey:(id)arg1 ;
-(id)dictionaryForPropertyKey:(id)arg1 columnSpan:(long long)arg2 ;
-(id)stringForPropertyKey:(id)arg1 ;
-(id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1 ;
-(double)fontWeightForFontID:(id)arg1 ;
-(BOOL)fontCondensedForFontID:(id)arg1 ;
-(double)scaledFontSizeForFontID:(id)arg1 ;
-(double)scaledLineHeightForFontID:(id)arg1 ;
-(void)setFontCache:(NFLFontCache *)arg1 ;
-(void)setScaleValue:(double)arg1 ;
-(void)setHeadlineScales:(SCD_Struct_NF0)arg1 ;
-(void)setColumnIrrespectiveProperties:(NSDictionary *)arg1 ;
-(long long)rowSpan;
-(NFLFontCache *)fontCache;
@end

