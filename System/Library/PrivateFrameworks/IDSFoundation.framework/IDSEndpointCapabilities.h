/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding> {

	NSDictionary* _capabilitiesMap;

}
+(BOOL)supportsSecureCoding;
+(id)validCapabilityKeys;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_capabilitiesMapFromClientDeviceData:(id)arg1 ;
-(id)initWithCapabilitiesMap:(id)arg1 ;
-(id)initWithClientDeviceData:(id)arg1 ;
-(id)valueForCapability:(id)arg1 ;
@end

