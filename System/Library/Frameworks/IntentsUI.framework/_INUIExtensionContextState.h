/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface _INUIExtensionContextState : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _hostedViewMinimumAllowedSizes;
	NSDictionary* _hostedViewMaximumAllowedSizes;
	NSArray* _interfaceSections;

}

@property (nonatomic,copy) NSDictionary * hostedViewMinimumAllowedSizes;              //@synthesize hostedViewMinimumAllowedSizes=_hostedViewMinimumAllowedSizes - In the implementation block
@property (nonatomic,copy) NSDictionary * hostedViewMaximumAllowedSizes;              //@synthesize hostedViewMaximumAllowedSizes=_hostedViewMaximumAllowedSizes - In the implementation block
@property (nonatomic,copy) NSArray * interfaceSections;                               //@synthesize interfaceSections=_interfaceSections - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)hostedViewMinimumAllowedSizes;
-(void)setHostedViewMinimumAllowedSizes:(NSDictionary *)arg1 ;
-(NSDictionary *)hostedViewMaximumAllowedSizes;
-(void)setHostedViewMaximumAllowedSizes:(NSDictionary *)arg1 ;
-(NSArray *)interfaceSections;
-(void)setInterfaceSections:(NSArray *)arg1 ;
@end

