/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding> {

	BOOL _isFile;
	NSString* _type;
	long long _count;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL isFile;                       //@synthesize isFile=_isFile - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(id)initWithType:(id)arg1 isFile:(BOOL)arg2 ;
-(void)incrementCount;
-(BOOL)isFile;
@end
