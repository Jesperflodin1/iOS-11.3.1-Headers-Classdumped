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
#import <iWorkImport/EQKitLayoutSchemataStackCarries.h>

@class NSArray, NSString;

@interface EQKitMathMLMStackCarries : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackCarries> {

	NSArray* mChildren;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isBaseFontNameUsed;
-(Schemata*)layoutSchemata;
-(id)schemataChildren;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
@end

