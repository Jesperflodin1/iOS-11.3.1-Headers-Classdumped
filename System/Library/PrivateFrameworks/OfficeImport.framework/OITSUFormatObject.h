/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUFormatObject : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_OI56 mFormatStruct;
	BOOL mUseExpandedContents;

}

@property (nonatomic,readonly) BOOL useExpandedContents; 
@property (nonatomic,readonly) SCD_Struct_OI57 formatStruct; 
+(id)defaultDateFormat:(id)arg1 ;
+(id)defaultDurationFormat;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI57)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI57)arg1 useExpandedContents:(BOOL)arg2 ;
-(SCD_Struct_OI57)formatStruct;
-(BOOL)useExpandedContents;
-(void)p_setFormatStruct:(SCD_Struct_OI57)arg1 ;
@end

