/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADLineEnd : OADProperties <NSCopying> {

	unsigned char mType;
	unsigned char mWidth;
	unsigned char mLength;
	unsigned mIsTypeOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsLengthOverridden : 1;

}
+(id)defaultProperties;
+(id)stringForLineEndType:(unsigned char)arg1 ;
+(id)stringForLineEndWidth:(unsigned char)arg1 ;
+(id)stringForLineEndLength:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned char)length;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned char)arg1 ;
-(unsigned char)width;
-(void)setWidth:(unsigned char)arg1 ;
-(BOOL)isWidthOverridden;
-(BOOL)isTypeOverridden;
-(id)initWithDefaults;
-(BOOL)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(BOOL)isLengthOverridden;
-(id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3 ;
@end

