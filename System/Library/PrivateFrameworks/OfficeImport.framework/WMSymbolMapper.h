/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class NSString;

@interface WMSymbolMapper : CMMapper {

	unsigned short mCharacter;
	NSString* mFontName;

}
+(unsigned short)mapWindingsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapCharacter:(unsigned short)arg1 withFontName:(id)arg2 ;
+(BOOL)isSymbolFontName:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDSymbol:(id)arg1 parent:(id)arg2 ;
@end

