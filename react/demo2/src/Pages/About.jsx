import React from 'react'

function About() {
  return (
   <header>
  {/* header inner */}
  <div className="head_top">
    <div className="header">
      <div className="container-fluid">
        <div className="row">
          <div className="col-md-3 logo_section">
            <div className="full">
              <div className="center-desk">
                <div className="logo">
                  <a href="index.html"><img src="Pages/logo.png" alt="#" /></a>
                </div>
              </div>
            </div>
          </div>
          <div className="col-md-9">
            <div className="right_header_info">
              <ul>
                <li className="menu_iconb">
                  <a href="Javascript:void(0)">Login</a>
                </li>
                <li>
                  <button type="button" id="sidebarCollapse">
                    <img src="images/menu_icon.png" alt="#" />
                  </button>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</header>

  )
}

export default About