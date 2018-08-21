/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassGroupStackViewDatasource <NSObject>
@optional
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
-(BOOL)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
-(BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
-(BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
-(id)footerForGroupStackView:(id)arg1;

@required
-(id)groupAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfGroups;
-(unsigned long long)indexOfGroup:(id)arg1;
-(unsigned long long)indexOfSeparationGroup;

@end
