/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class KNSlideNode;


@protocol KNSlideCollection <NSObject>
@property (nonatomic,readonly) KNSlideNode * defaultSlideNodeForNewSelection; 
@required
-(BOOL)containsSlideNode:(id)arg1;
-(unsigned long long)indexOfSlideNode:(id)arg1;
-(id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
-(id)orderedSlideNodesInSelection:(id)arg1;
-(KNSlideNode *)defaultSlideNodeForNewSelection;

@end

