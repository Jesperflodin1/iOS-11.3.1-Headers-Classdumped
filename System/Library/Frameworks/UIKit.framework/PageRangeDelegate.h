/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PageRangeDelegate <NSObject>
@required
-(void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)removePage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addAllPages:(id)arg1;
-(BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddAllPages:(id)arg1;
-(BOOL)canShowMenuBar;

@end
