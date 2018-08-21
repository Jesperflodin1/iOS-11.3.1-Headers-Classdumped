/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMutableContainerRep <TSDContainerRep>
@property (nonatomic,readonly) NSObject*<TSDMutableContainerInfo> mutableContainerInfo; 
@required
-(void)setChildReps:(id)arg1;
-(void)addChildRep:(id)arg1;
-(void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)insertChildRep:(id)arg1 below:(id)arg2;
-(void)insertChildRep:(id)arg1 above:(id)arg2;
-(void)removeChildRep:(id)arg1;
-(void)replaceChildRep:(id)arg1 with:(id)arg2;
-(NSObject*<TSDMutableContainerInfo>)mutableContainerInfo;

@end

