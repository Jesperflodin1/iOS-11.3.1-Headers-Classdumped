/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSIndexPath, UICollectionViewDropProposal;


@protocol UICollectionViewDropCoordinator <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) UICollectionViewDropProposal * proposal; 
@property (nonatomic,readonly) id<UIDropSession> session; 
@required
-(NSArray *)items;
-(UICollectionViewDropProposal *)proposal;
-(NSIndexPath *)destinationIndexPath;
-(id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
-(id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2;
-(id)dropItem:(id)arg1 toTarget:(id)arg2;
-(id<UIDropSession>)session;
-(id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(CGRect)arg3;

@end

