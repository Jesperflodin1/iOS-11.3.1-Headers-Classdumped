/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MailAccount;

@interface MailboxListViewingContext : NSObject {

	BOOL _promoteFavorites;
	int _type;
	float _offsect;
	MailAccount* _account;
	id _selectionTarget;

}

@property (nonatomic,retain) MailAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id selectionTarget;                 //@synthesize selectionTarget=_selectionTarget - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL promoteFavorites;              //@synthesize promoteFavorites=_promoteFavorites - In the implementation block
@property (assign,nonatomic) float offsect;                      //@synthesize offsect=_offsect - In the implementation block
-(BOOL)promoteFavorites;
-(float)offsect;
-(void)setOffsect:(float)arg1 ;
-(void)setPromoteFavorites:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setAccount:(MailAccount *)arg1 ;
-(MailAccount *)account;
-(void)setSelectionTarget:(id)arg1 ;
-(id)selectionTarget;
@end
