/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EQKitLayoutNode <NSObject>
@property (nonatomic,readonly) id<EQKitLayoutNode> parent; 
@required
-(id<EQKitLayoutNode>)parent;
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(BOOL)isNumber;
-(BOOL)isSpaceLike;
-(id)layoutStyleNode;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg1;

@end
