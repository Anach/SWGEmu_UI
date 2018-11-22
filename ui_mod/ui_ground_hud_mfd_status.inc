		<Page
			BackgroundColor='#0000FF'
			Location='1,0'
			MaximumSize='16384,64'
			MinimumSize='260,64'
			Name='MFDStatus'
			OnEnableEffector='/Effectors.Fadefull'
			PackLocation='nfn,nfn'
			PackSize='p,f'
			ScrollExtent='260,64'
			Size='260,64'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='true'
		>
			<Data
				iconposture='vsp.posture.icon'
				Name='CodeData'
				pagea='composite.ham.a'
				pageF='composite.ham.f'
				pageh='composite.ham.h'
				pagem='composite.ham.m'
				samplestateicon='sampleStateIcon'
				volumestates='composite.vs'
			/>
			<Page
				BackgroundOpacity='1.00'
				GetsInput='false'
				Location='233,-1'
				Name='corner_TL'
				OnDisableEffector='/effectors.opacity.slow.fadehalf'
				OnEnableEffector='/effectors.opacity.fast.fadefull'
				OpacityRelativeMin='0.50'
				PackLocation='fff,nfn'
				PackSize='f,f'
				RStyleDefault='/Styles.New.corner_tool.rs_default'
				ScrollExtent='28,22'
				Size='28,22'
			/>
			<Composite
				Alignment='Back'
				Location='38,14'
				MinimumSize='220,48'
				Name='composite'
				OpacityRelativeMin='1.00'
				Orientation='Horizontal'
				PackLocation='nfn,cpc'
				PackSize='a,a'
				ScrollExtent='220,48'
				Size='220,48'
				SpacingType='Fill'
			>
				<Composite
					BackgroundColor='#003366'
					FillRemainder='false'
					MinimumSize='100,48'
					Name='ham'
					OpacityRelativeMin='1.00'
					PackLocation='nfn,nfn'
					PackSize='f,a'
					ScrollExtent='100,48'
					Size='100,48'
					SpacingType='Fill'
				>
					<Page
						MinimumSize='100,10'
						Name='h'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a'
						ScrollExtent='100,10'
						Size='100,10'
					>
						<Data
							current='normalmax.inner.current'
							currentmax='normalmax.inner.currentMax'
							Name='CodeData'
							NormalMax='NormalMax'
							recentcurrent='normalmax.inner.recentcurrent'
							recentmax='normalmax.inner.recentmax'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							Name='NormalMax'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
							ScrollExtent='100,10'
							Size='100,10'
						>
							<Page
								BackgroundColor='#00FF00'
								Name='inner'
								PackLocation='nfn,cfc'
								PackSize='a,a'
								ScrollExtent='100,10'
								Size='100,10'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									Color='#FF0000'
									Name='Current'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
									ScrollExtent='83,10'
									Size='83,10'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#0A3645'
									Location='101,0'
									MinimumSize='0,10'
									Name='CurrentMax'
									PackLocation='fpf'
									PackSize='p,1'
									PalBgTint='accentdark'
									RStyleDefault='/Styles.mfd.statusbars_small.currentMax.rs_default'
									ScrollExtent='14,10'
									Size='14,10'
								/>
								<Page
									BackgroundColor='#FFFF00'
									BackgroundOpacity='1.00'
									Name='RecentMax'
									PackSize='1,p'
									RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
									ScrollExtent='100,10'
									Size='100,10'
									Visible='false'
								/>
								<Page
									BackgroundColor='#00FF00'
									BackgroundOpacity='1.00'
									Color='#FF0000'
									Name='RecentCurrent'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
									ScrollExtent='9,10'
									Size='9,10'
								/>
							</Page>
						</Page>
					</Page>
					<Page
						Location='0,10'
						MinimumSize='100,10'
						Name='a'
						OnHide='parent.H.packSize=a,0.5'
						OnShow='parent.H.packSize=a'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a'
						ScrollExtent='100,10'
						Size='100,10'
					>
						<Data
							current='normalmax.inner.current'
							currentmax='normalmax.inner.currentMax'
							Name='CodeData'
							NormalMax='NormalMax'
							recentcurrent='normalmax.inner.recentcurrent'
							recentmax='normalmax.inner.recentmax'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							Name='NormalMax'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
							ScrollExtent='100,10'
							Size='100,10'
						>
							<Page
								BackgroundColor='#00FF00'
								Name='inner'
								PackLocation='nfn,cfc'
								PackSize='a,a'
								ScrollExtent='100,10'
								Size='100,10'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									Color='#00FF00'
									Name='Current'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
									ScrollExtent='83,10'
									Size='83,10'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#0A3645'
									Location='101,0'
									MinimumSize='0,10'
									Name='CurrentMax'
									PackLocation='fpf'
									PackSize='p,1'
									PalBgTint='accentdark'
									RStyleDefault='/Styles.mfd.statusbars_small.currentMax.rs_default'
									ScrollExtent='14,10'
									Size='14,10'
								/>
								<Page
									BackgroundColor='#FFFF00'
									BackgroundOpacity='1.00'
									Name='RecentMax'
									PackSize='1,p'
									RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
									ScrollExtent='100,10'
									Size='100,10'
									Visible='false'
								/>
								<Page
									BackgroundColor='#00FF00'
									BackgroundOpacity='1.00'
									Color='#00FF00'
									Name='RecentCurrent'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
									ScrollExtent='9,10'
									Size='9,10'
								/>
							</Page>
						</Page>
					</Page>
					<Page
						Location='0,24'
						MinimumSize='100,10'
						Name='m'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a'
						ScrollExtent='100,10'
						Size='100,10'
					>
						<Data
							current='normalmax.inner.current'
							currentmax='normalmax.inner.currentMax'
							Name='CodeData'
							NormalMax='NormalMax'
							recentcurrent='normalmax.inner.recentcurrent'
							recentmax='normalmax.inner.recentmax'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							Name='NormalMax'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
							ScrollExtent='100,10'
							Size='100,10'
						>
							<Page
								BackgroundColor='#00FF00'
								Name='inner'
								PackLocation='nfn,cfc'
								PackSize='a,a'
								ScrollExtent='100,10'
								Size='100,10'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									Color='#0000FF'
									Name='Current'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
									ScrollExtent='83,10'
									Size='83,10'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#0A3645'
									Location='101,0'
									MinimumSize='0,10'
									Name='CurrentMax'
									PackLocation='fpf'
									PackSize='p,1'
									PalBgTint='accentdark'
									RStyleDefault='/Styles.mfd.statusbars_small.currentMax.rs_default'
									ScrollExtent='14,10'
									Size='14,10'
								/>
								<Page
									BackgroundColor='#FFFF00'
									BackgroundOpacity='1.00'
									Name='RecentMax'
									PackSize='1,p'
									RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
									ScrollExtent='100,10'
									Size='100,10'
									Visible='false'
								/>
								<Page
									BackgroundColor='#00FF00'
									BackgroundOpacity='1.00'
									Color='#0000FF'
									Name='RecentCurrent'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
									ScrollExtent='9,10'
									Size='9,10'
								/>
							</Page>
						</Page>
					</Page>
					<Page
						Location='0,36'
						MinimumSize='100,10'
						Name='f'
						Orientation='horizontal'
						PackLocation='nfn,nfn'
						PackSize='a'
						ScrollExtent='100,10'
						Size='100,10'
					>
						<Data
							current='normalmax.inner.current'
							Name='CodeData'
							NormalMax='NormalMax'
							recentcurrent='normalmax.inner.recentcurrent'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							Name='NormalMax'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
							ScrollExtent='100,10'
							Size='100,10'
						>
							<Page
								BackgroundColor='#00FF00'
								Name='inner'
								PackLocation='nfn,cfc'
								PackSize='a,a'
								ScrollExtent='100,10'
								Size='100,10'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									Color='#CF11FF'
									Name='Current'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
									ScrollExtent='83,10'
									Size='83,10'
								/>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#CF11FF'
									Location='106,0'
									Name='RecentCurrent'
									PackSize='p,a'
									RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
									ScrollExtent='9,10'
									Size='9,10'
								/>
							</Page>
						</Page>
					</Page>
				</Composite>
				<VolumePage
					CellAlignmentH='left'
					CellCount='5,2'
					CellPadding='0,0'
					CellSelectable='false'
					CellSelectionOverlayOpacity='1.00'
					CellSize='20,20'
					GetsInput='false'
					Location='160,0'
					MaximumSize='100,48'
					MinimumScrollExtent='100,48'
					Name='vs'
					OpacityRelativeMin='1.00'
					PackLocation='fff,cfc'
					PackSize='f,f'
					ScrollExtent='100,48'
					Size='100,48'
				>
					<Image
						Color='#54E4FE'
						LocalTooltip='st'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='i'
						PalColor='icondefault'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.cover'
						Tooltip='st'
					/>
					<Image
						Color='#54E4FE'
						Location='11,27'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='i'
						PalColor='icondefault'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.cover'
						Visible='false'
					/>
					<Image
						Color='#54E4FE'
						Location='20,0'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='i'
						PalColor='icondefault'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.cover'
					/>
					<Image
						Color='#54E4FE'
						Location='36,0'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='i'
						PalColor='icondefault'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.combat'
					/>
					<Image
						Color='#54E4FE'
						Location='54,0'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='i'
						PalColor='icondefault'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.peace'
					/>
					<Image
						Color='#54E4FE'
						Location='72,0'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='i'
						PalColor='icondefault'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.aiming'
					/>
					<Image
						Color='#54E4FE'
						Location='90,0'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='i'
						PalColor='icondefault'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.alert'
					/>
				</VolumePage>
			</Composite>
			<Page
				Location='2,59'
				Name='toggle'
				OnDisableEffector='/effectors.opacity.fast.fadeout'
				OnEnableEffector='/effectors.opacity.fast.fadefull'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='13,6'
				Size='13,6'
			>
				<Button
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.00'
					Dragable='true'
					DragType='command'
					Icon='/Styles.Icon.Misc.expand'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					Name='collapse'
					OnPress='parent.expand.visible=true'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='13,6'
					Size='13,6'
					Style='style'
					TextColor='#000000'
				></Button>
				<Button
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.00'
					Dragable='true'
					dragcommand='CMD_uiChatCollapse'
					DragType='uicommand'
					Icon='/Styles.Icon.Misc.expand'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					Name='expand'
					OnPress='parent.collapse.visible=true'
					visible='false'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='13,6'
					Size='13,6'
					Style='style'
					TextColor='#000000'
				></Button>
			</Page>
			<Text
				Font='bold_12'
				LocalText='xxx target name'
				Location='38,1'
				MaxLines='1'
				Name='textName'
				PackLocation='nfn,nfn'
				PackSize='a,f'
				PalText='text1'
				ScrollExtent='90,14'
				Size='90,14'
				TextAlignmentVertical='Center'
				TextColor='#96F4FC'
			>xxx target name</Text>
			<Image
				Color='#54E4FE'
				LocalTooltip='tooltip'
				Location='143,20'
				MaximumSize='20,20'
				MinimumSize='20,20'
				Name='sampleStateIcon'
				OnDisable='opacity=0'
				OnEnableEffector='/effectors.opacity.fast.fadefull'
				PalColor='icondefault'
				ScrollExtent='20,20'
				Size='20,20'
				Style='/Styles.Icon.state.cover'
				Tooltip='tooltip'
				Visible='false'
			/>
			<Page
				MaximumSize='36,56'
				Name='vsp'
				PackLocation='nfn,fff'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='36,56'
				Size='36,56'
			>
				<Page
					BackgroundOpacity='1.00'
					Name='posture'
					PackLocation='nfn,nfn'
					PackSize='f,a'
					RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
					ScrollExtent='36,56'
					Size='36,56'
				>
					<Image
						BackgroundColor='#42FF00'
						BackgroundTint='#42FF00'
						Color='#54E4FE'
						LocalTooltip='post'
						Location='0,11'
						Name='icon'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='f,f'
						PalColor='icondefault'
						ScrollExtent='34,34'
						Size='34,34'
						Style='/Styles.Icon.posture.upright'
						Tooltip='post'
					/>
				</Page>
			</Page>
			<Page
				BackgroundOpacity='1.00'
				Location='28,0'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				RStyleDefault='/Styles.window.mfd.mfd_back.rs_default'
				ScrollExtent='232,64'
				Size='232,64'
			/>
		</Page>