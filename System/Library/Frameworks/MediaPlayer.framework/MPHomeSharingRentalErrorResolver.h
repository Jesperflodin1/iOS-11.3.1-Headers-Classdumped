/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVErrorResolver.h>
#import <libobjc.A.dylib/SSRequestDelegate.h>

@class MPHomeSharingML3DataProvider, NSError, SSRentalCheckoutRequest, NSString;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {

	unsigned long long _accountID;
	MPHomeSharingML3DataProvider* _dataProvider;
	NSError* _error;
	unsigned long long _itemID;
	unsigned long long _homeSharingID;
	unsigned long long _rentalID;
	SSRentalCheckoutRequest* _request;

}

@property (nonatomic,retain) MPHomeSharingML3DataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long itemID;                              //@synthesize itemID=_itemID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDataProvider:(MPHomeSharingML3DataProvider *)arg1 ;
-(MPHomeSharingML3DataProvider *)dataProvider;
-(void)resolveError:(id)arg1 ;
-(id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4 ;
-(BOOL)_errorIsFairPlayError:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(unsigned long long)itemID;
@end

