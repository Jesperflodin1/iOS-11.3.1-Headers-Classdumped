/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADBulletProperties.h>

@interface OADAutoNumberBulletProperties : OADBulletProperties {

	int mSchemeType;
	unsigned long long mStartIndex;

}
-(unsigned long long)startIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)autoNumberSchemeType;
-(id)initWithAutoNumberSchemeType:(int)arg1 startIndex:(unsigned long long)arg2 ;
@end
