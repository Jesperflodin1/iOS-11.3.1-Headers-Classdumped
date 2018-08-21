/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <iWorkImport/TSDMutableContainerRep.h>

@class NSMutableArray, NSArray, NSString;

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep> {

	NSMutableArray* mChildReps;

}

@property (nonatomic,readonly) NSArray * visibleChildLayouts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@property (nonatomic,readonly) NSArray * childReps; 
@property (nonatomic,readonly) NSObject*<TSDMutableContainerInfo> mutableContainerInfo; 
-(id)initWithLayout:(id)arg1 canvasView:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(NSArray *)childReps;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(void)setChildReps:(NSArray *)arg1 ;
-(void)addChildRep:(id)arg1 ;
-(void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertChildRep:(id)arg1 below:(id)arg2 ;
-(void)insertChildRep:(id)arg1 above:(id)arg2 ;
-(void)removeChildRep:(id)arg1 ;
-(void)replaceChildRep:(id)arg1 with:(id)arg2 ;
-(NSObject*<TSDMutableContainerInfo>)mutableContainerInfo;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)updateChildrenFromLayout;
-(NSArray *)visibleChildLayouts;
@end

