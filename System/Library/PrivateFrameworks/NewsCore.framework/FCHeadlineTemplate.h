/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCTextInfo, FCColor, NSArray;

@interface FCHeadlineTemplate : NSObject <NSCopying> {

	FCTextInfo* _headlineTitleTextInfo;
	FCTextInfo* _headlineExcerptTextInfo;
	FCTextInfo* _headlineBylineTextInfo;
	FCColor* _backgroundColor;
	NSArray* _loadableFonts;

}

@property (nonatomic,copy) FCTextInfo * headlineTitleTextInfo;                //@synthesize headlineTitleTextInfo=_headlineTitleTextInfo - In the implementation block
@property (nonatomic,copy) FCTextInfo * headlineExcerptTextInfo;              //@synthesize headlineExcerptTextInfo=_headlineExcerptTextInfo - In the implementation block
@property (nonatomic,copy) FCTextInfo * headlineBylineTextInfo;               //@synthesize headlineBylineTextInfo=_headlineBylineTextInfo - In the implementation block
@property (nonatomic,copy) FCColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * loadableFonts;                           //@synthesize loadableFonts=_loadableFonts - In the implementation block
+(id)_defaultBackgroundColor;
+(id)_headlineTemplateWithJSON:(id)arg1 versionNumber:(id)arg2 ;
+(id)headlineTemplateWithJSON:(id)arg1 ;
+(id)templateByMergingTemplate:(id)arg1 intoTemplate:(id)arg2 ;
+(id)_defaultTitleTextColor;
-(id)init;
-(void)setBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeadlineTitleTextInfo:(FCTextInfo *)arg1 ;
-(void)setHeadlineExcerptTextInfo:(FCTextInfo *)arg1 ;
-(void)setHeadlineBylineTextInfo:(FCTextInfo *)arg1 ;
-(FCTextInfo *)headlineTitleTextInfo;
-(FCTextInfo *)headlineExcerptTextInfo;
-(FCTextInfo *)headlineBylineTextInfo;
-(NSArray *)loadableFonts;
-(id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2 ;
-(void)mergeFromTemplate:(id)arg1 ;
-(id)_allThemePropertyNames;
-(void)setLoadableFonts:(NSArray *)arg1 ;
@end

