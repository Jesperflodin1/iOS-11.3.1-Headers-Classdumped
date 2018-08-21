/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInsertionConditionEngine.h>

@protocol SXComponentInsertionConditionEngine <NSObject>
@required
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
-(void)insertedComponent:(id)arg1 approximateLocation:(CGPoint)arg2;
-(void)addCondition:(id)arg1;

@end


@class NSMutableSet, NSString;

@interface SXComponentInsertionConditionEngine : NSObject <SXComponentInsertionConditionEngine> {

	NSMutableSet* _conditions;

}

@property (nonatomic,readonly) NSMutableSet * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableSet *)conditions;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 ;
-(void)insertedComponent:(id)arg1 approximateLocation:(CGPoint)arg2 ;
-(void)addCondition:(id)arg1 ;
@end

