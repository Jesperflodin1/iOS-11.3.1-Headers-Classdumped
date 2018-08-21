/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMUser;

@interface _HOUserAccessItem : HFItem {

	HMUser* _user;
	/*^block*/id _resultsBlock;

}

@property (nonatomic,readonly) HMUser * user;                     //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) id resultsBlock;              //@synthesize resultsBlock=_resultsBlock - In the implementation block
-(id)initWithUser:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(id)resultsBlock;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMUser *)user;
@end

