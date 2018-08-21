/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface FCCKPrivateDatabaseServerChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _changeTokensByDestinationKey;

}

@property (nonatomic,copy) NSDictionary * changeTokensByDestinationKey;              //@synthesize changeTokensByDestinationKey=_changeTokensByDestinationKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenByAddingCKToken:(id)arg1 forDestination:(long long)arg2 toToken:(id)arg3 ;
+(id)_keyForDestination:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)changeTokenForDestination:(long long)arg1 ;
-(id)initWithChangeTokensByDestinationKey:(id)arg1 ;
-(NSDictionary *)changeTokensByDestinationKey;
-(id)initWithChangeTokensByDestination:(id)arg1 ;
-(void)setChangeTokensByDestinationKey:(NSDictionary *)arg1 ;
@end

