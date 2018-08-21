/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class MSOID, NSArray, NSData;

@interface MSCMSAttribute : NSObject <MSCMSAttributeCoder> {

	MSOID* _attributeType;
	NSArray* _attributeValues;
	NSData* _attributeDERData;
	Attribute* _encodedAttribute;

}

@property (retain) NSData * attributeDERData;                //@synthesize attributeDERData=_attributeDERData - In the implementation block
@property (assign) Attribute* encodedAttribute;              //@synthesize encodedAttribute=_encodedAttribute - In the implementation block
@property (readonly) MSOID * attributeType;                  //@synthesize attributeType=_attributeType - In the implementation block
@property (readonly) NSArray * attributeValues;              //@synthesize attributeValues=_attributeValues - In the implementation block
+(id)decodeAttribute:(Attribute*)arg1 error:(id*)arg2 ;
-(NSArray *)attributeValues;
-(MSOID *)attributeType;
-(void)dealloc;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(Attribute*)generateAttributeStruct;
-(id)initWithAttributeStruct:(Attribute*)arg1 error:(id*)arg2 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithDER:(id)arg1 ;
-(id)initWithAttributeType:(id)arg1 values:(id)arg2 ;
-(NSData *)attributeDERData;
-(void)setAttributeDERData:(NSData *)arg1 ;
-(Attribute*)encodedAttribute;
-(void)setEncodedAttribute:(Attribute*)arg1 ;
@end

