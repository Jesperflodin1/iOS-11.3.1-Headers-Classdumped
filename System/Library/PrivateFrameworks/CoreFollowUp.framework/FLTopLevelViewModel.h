/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FLViewModel.h>

@class FLFollowUpController, NSString;

@interface FLTopLevelViewModel : NSObject <FLViewModel> {

	FLFollowUpController* _controller;
	int _notifyToken;
	/*^block*/id _itemChangeObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(id)groups;
-(void)refreshItems:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)extensionToItemMapFromItems:(id)arg1 ;
-(void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)allPendingItems;
-(void)mapItemsToGroups:(id)arg1 ;
-(void)setItemChangeHandler:(/*^block*/id)arg1 ;
-(void)refreshItemsForItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)allPendingItemsContains:(id)arg1 ;
@end

