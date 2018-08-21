/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADParagraphProperties, CMStyle;

@interface PMBulletMapper : CMMapper {

	OADParagraphProperties* mProperties;
	CMStyle* mStyle;
	int mFontSize;

}
+(id)stringForIndex:(unsigned long long)arg1 withFormat:(int)arg2 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)makeBulletWithListState:(id)arg1 ;
-(int)bulletSize;
-(id)bulletFontName;
-(void)mapBulletColorWithState:(id)arg1 ;
-(id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3 ;
@end

