/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFKeyAttributes.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class _SFKeySpecifier, NSString;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes> {

	id _symmetricKeyAttributesInternal;

}

@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedLabel;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;
-(id)initWithSpecifier:(id)arg1 domain:(NSString*)arg2 ;
-(void)setKeySpecifier:(_SFKeySpecifier *)arg1 ;
@end

