/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CALayer, TSWPEquationLayout, TSWPEquationInfo, NSString;

@interface TSWPEquationRep : TSDRep <CALayerDelegate> {

	CALayer* _equationLayer;

}

@property (nonatomic,retain) CALayer * equationLayer;                            //@synthesize equationLayer=_equationLayer - In the implementation block
@property (nonatomic,readonly) TSWPEquationLayout * equationLayout; 
@property (nonatomic,readonly) TSWPEquationInfo * equationInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSWPEquationInfo *)equationInfo;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(CGRect)clipRect;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(TSWPEquationLayout *)equationLayout;
-(CALayer *)equationLayer;
-(void)setEquationLayer:(CALayer *)arg1 ;
@end

