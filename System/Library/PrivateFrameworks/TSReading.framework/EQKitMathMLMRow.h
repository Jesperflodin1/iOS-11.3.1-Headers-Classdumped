/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataRow.h>

@class NSArray, NSString;

@interface EQKitMathMLMRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataRow> {

	NSArray* mChildren;
	struct {
		unsigned mImplied;
	}  mFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(id)schemataChildren;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(id)initWithChildren:(id)arg1 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >Ref)mathMLAttributes;
-(id)initWithChildren:(id)arg1 node:(xmlNode*)arg2 ;
@end

