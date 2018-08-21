/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/EQKitMathMLNode.h>
#import <iWorkImport/EQKitMathMLNode.h>
#import <iWorkImport/EQKitFontStyling.h>
#import <iWorkImport/EQKitLayoutSchemataToken.h>

@class NSString;

@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken> {

	struct {
		unsigned mType : 2;
	}  mFlags;
	SCD_Union_EQ29 mContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isNumber;
-(id)schemataTokenString;
-(unsigned)schemataUnicharOrNul;
-(id)initWithString:(id)arg1 environment:(id)arg2 ;
-(int)scriptContext;
-(int)scriptVariant;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
-(id)schemataFontStyling;
-(id)initWithContent:(id)arg1 ;
-(id)fontStyling;
@end

