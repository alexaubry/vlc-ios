/*****************************************************************************
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2015 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan.org>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

#import <UIKit/UIKit.h>

@interface VLCOpenNetworkStreamTVViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (readwrite, nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (readwrite, nonatomic, weak) IBOutlet UITextField *playURLField;
@property (readwrite, nonatomic, weak) IBOutlet UITableView *previouslyPlayedStreamsTableView;

- (IBAction)URLEnteredInField:(id)sender;

@end
