/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface XCTSerializedTransportWrapper : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _serializedTransport;

}

@property (readonly) NSObject*<OS_xpc_object> serializedTransport;              //@synthesize serializedTransport=_serializedTransport - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSerializedTransport:(id)arg1 ;
-(NSObject*<OS_xpc_object>)serializedTransport;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

