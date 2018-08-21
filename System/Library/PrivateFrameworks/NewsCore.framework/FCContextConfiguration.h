/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying> {

	BOOL _isProductionEnvironment;
	NSString* _contentContainerIdentifier;
	NSString* _privateDataContainerIdentifier;
	NSString* _privateDataSecureContainerIdentifier;
	NSString* _contentContainerCombinationIdentifier;
	NSString* _privateDataContainerCombinationIdentifier;

}

@property (nonatomic,readonly) BOOL isProductionEnvironment;                                           //@synthesize isProductionEnvironment=_isProductionEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerIdentifier;                             //@synthesize contentContainerIdentifier=_contentContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerIdentifier;                         //@synthesize privateDataContainerIdentifier=_privateDataContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataSecureContainerIdentifier;                   //@synthesize privateDataSecureContainerIdentifier=_privateDataSecureContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerCombinationIdentifier;                  //@synthesize contentContainerCombinationIdentifier=_contentContainerCombinationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerCombinationIdentifier;              //@synthesize privateDataContainerCombinationIdentifier=_privateDataContainerCombinationIdentifier - In the implementation block
+(id)defaultConfiguration;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)privateDataContainerIdentifier;
-(NSString *)privateDataSecureContainerIdentifier;
-(BOOL)isProductionEnvironment;
-(NSString *)privateDataContainerCombinationIdentifier;
-(id)initWithProductionEnvironment:(BOOL)arg1 contentContainerIdentifier:(id)arg2 privateDataContainerIdentifier:(id)arg3 privateDataSecureContainerIdentifier:(id)arg4 storeFrontID:(id)arg5 ;
-(NSString *)contentContainerIdentifier;
-(NSString *)contentContainerCombinationIdentifier;
@end
