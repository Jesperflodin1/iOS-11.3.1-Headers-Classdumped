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

@class EQKitMathMLNode;

@interface EQKitMathMLTernaryNode : EQKitMathMLNode <EQKitMathMLNode> {

	EQKitMathMLNode* mFirst;
	EQKitMathMLNode* mSecond;
	EQKitMathMLNode* mThird;

}
-(id)init;
-(void)dealloc;
-(BOOL)isBaseFontNameUsed;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >Ref)mathMLAttributes;
-(id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3 ;
@end

