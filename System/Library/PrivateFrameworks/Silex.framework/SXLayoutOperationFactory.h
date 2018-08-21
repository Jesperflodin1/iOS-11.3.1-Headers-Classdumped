/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayoutOperationFactory.h>

@protocol SXLayoutOperationFactory <NSObject>
@required
-(id)layoutOperationWithViewportSize:(CGSize)arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3;

@end


@protocol SXComponentSizerEngine, SXLayoutBlueprintFactory;
@class NSString;

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory> {

	id<SXComponentSizerEngine> _componentSizerEngine;
	id<SXLayoutBlueprintFactory> _layoutBlueprintFactory;

}

@property (nonatomic,readonly) id<SXComponentSizerEngine> componentSizerEngine;                  //@synthesize componentSizerEngine=_componentSizerEngine - In the implementation block
@property (nonatomic,readonly) id<SXLayoutBlueprintFactory> layoutBlueprintFactory;              //@synthesize layoutBlueprintFactory=_layoutBlueprintFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layoutOperationWithViewportSize:(CGSize)arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3 ;
-(id)initWithComponentSizerEngine:(id)arg1 layoutBlueprintFactory:(id)arg2 ;
-(id<SXLayoutBlueprintFactory>)layoutBlueprintFactory;
-(id<SXComponentSizerEngine>)componentSizerEngine;
@end

