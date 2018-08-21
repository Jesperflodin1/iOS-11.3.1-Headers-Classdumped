/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKDOMBindingControllerDelegate <NSObject>
@optional
-(void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
-(BOOL)shouldResolveDataForDOMBindingController:(id)arg1;
-(BOOL)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
-(BOOL)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
-(id)additionalKeysToResolveForDOMBindingController:(id)arg1;
-(BOOL)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
-(void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;

@end

