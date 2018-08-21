/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SUInstallPolicy : NSObject <NSSecureCoding> {

	unsigned long long _skipsAllowed;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long skipsAllowed;              //@synthesize skipsAllowed=_skipsAllowed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)_setType:(unsigned long long)arg1 ;
-(id)initWithInstallPolicyType:(unsigned long long)arg1 ;
-(void)setSkipsAllowed:(unsigned long long)arg1 ;
-(unsigned long long)skipsAllowed;
@end
