//
//  MMUnifiedTabStyle.h
//  --------------------
//
//  Created by Keith Blount on 30/04/2006.
//  Copyright 2006 Keith Blount. All rights reserved.
//

#if __has_feature(modules)
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif
#import "MMTabStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMUnifiedTabStyle : NSObject <MMTabStyle>
{
	CGFloat _leftMarginForTabBarView;
	
	@private
	NSImage				*unifiedCloseButton;
	NSImage				*unifiedCloseButtonDown;
	NSImage				*unifiedCloseButtonOver;
	NSImage				*unifiedCloseDirtyButton;
	NSImage				*unifiedCloseDirtyButtonDown;
	NSImage				*unifiedCloseDirtyButtonOver;
}

@property (assign) CGFloat leftMarginForTabBarView;

@end

NS_ASSUME_NONNULL_END
